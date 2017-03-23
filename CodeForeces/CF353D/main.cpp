// BFS.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <queue>
#include <memory>
#include <sstream>
#include <map>
using namespace std;

struct node
{
   node(long value, node * p)
      : score(value)
      , parent(p)
      , left(NULL)
      , right(NULL)
   {}
   long score;
   node * parent;
   node * left;
   node * right;
};

map<long, node*> dictionary;


node * insert(node*& root, long value)
{
   if (!root)
   {
      node * n = new node(value, NULL);
      dictionary[value] = n;
      return n;
   }

   if (dictionary.find(value) != dictionary.end())
   {
      return root;
   }

   map<long, node*>::iterator lb = --(dictionary.lower_bound(value));
   map<long, node*>::iterator ub = dictionary.upper_bound(value);

   if (lb != dictionary.end())
   {
      if (!lb->second->right)
      {
         node * n = new node(value, lb->second);
         dictionary[value] = n;
         lb->second->right = n;
      }
      else if (!ub->second->left)
      {
         node * n = new node(value, ub->second);
         dictionary[value] = n;
         ub->second->left = n;
      }
   }
   else if (ub != dictionary.end())
   {
      if (!ub->second->left)
      {
         node * n = new node(value, ub->second);
         dictionary[value] = n;
         ub->second->left = n;
      }
   }

   return root;
}




int main()
{
   long n;
   cin >> n;

   node * root = NULL;

   for (long i = 0; i < n; ++i)
   {
      long v;
      cin >> v;
      root = insert(root, v);
      node * p = dictionary[v]->parent;
      if (p)
         cout << p->score << " ";
   }

   return 0;
}