#include "cs163_list.h"
using namespace std;

//Sum  all of the data together in a LLL
int list::sum_total()
{
 	//FIRST do this iteratively here. Then recursively
        //COMMENT out the iterative version when  rewriting
        //the solution recursively
       node * temp = head;
       int total;
       while(temp != 0)
       {
            total += temp->data;
            temp = temp->next;
       }
        //To solve this recursively write another
        //function:   int sum_total(node * head);
        //and call it from this function
        return total;
}

//Now implement the function recursively!
int list::sum_total(node * head)
{

    return 0;
}

// *************************************************
//Remove the last node in a LLL. Return false if the
//list is empty and nothing is removed
bool list::remove_last()
{
        //Write your code here
 	//FIRST do this iteratively here. Then recursively
        //COMMENT out the iterative version when  rewriting
        //
        return false;
}

//Now implement the function recursively!
bool list::remove_last(node * & head, node * & tail)
{
    return false;
}

// ************************************************
//Remove all nodes in a LLL. Remove false if there is
//nothing to remove
bool list::remove_all()
{
        //Remove all nodes in a LLL
 	//FIRST do this iteratively here. Then recursively
        //COMMENT out the iterative version when  rewriting
    return false;
}

//Now implement the function recursively!
bool list::remove_all(node * & head)
{

    return false;

}


// ************************************************
//Return true if the requested item (sent in as an argument)
//is in the list, otherwise return false
bool list::find_item(int item_to_find)
{
        //Write your code here
    return false;
}

//Now implement the function recursively!
bool list::find_item(node * head, int item_to_find)
{

    return false;
}


// ************************************************
//Make a complete copy of a LLL
bool list::copy(list & from)
{
        //Write your code here
    return false;
}

//Now implement the function recursively
bool list::copy(node * & dest_head, node * & dest_tail, node * source)
{
    return false;
}
