// Link : https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1?page=1&category[]=Linked%20List&curated[]=1&sortBy=submissions


struct Node* reverseList(struct Node *head)
    {
        
        if(head==NULL)
            return NULL;
        
        //taking three pointers to store the current, previous and next nodes.
        struct Node *prev = NULL;   
        struct Node *current = head;
        struct Node *next= current->next;
        
        while(current!=NULL)
        {
            //taking the next node as next.
            next=current->next;
            
            //storing the previous node in link part of current node.
            current->next=prev; 
            
            //updating prev from previous node to current node.
            prev=current; 
            
            //updating current node to next node.
            current =next;        
        }
        
        return prev;
    }
