LLNode *m = node;  
LLNode *d = node;  
  
    if (node!=NULL)  
    {  
        while (d != NULL && d->next != NULL)  
        {  
            d = d->next->next;  
            m = m->next;  
        }  
        return m->val;
    }  
