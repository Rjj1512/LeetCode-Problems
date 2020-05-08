class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* copy_head = nullptr, *copy_tail = nullptr;
        Node *nextptr = nullptr;
        
        // Add the copy nodes after the original nodes
        Node* temp = head;
        while(temp) {
            Node* node = new Node(temp->val);    
            nextptr = temp->next;
            // add the node copy
            temp->next = node;
            node->next = nextptr;
            
            temp = nextptr;
        }
        
        // update the random pointers
        temp = head;
        while(temp) {
            // set the random ptr of cloned node
            (temp->next)->random = temp->random ? (temp->random)->next : nullptr;
            // next node
            temp = temp->next->next;
        }
        
        temp = head;
        // remove the cloned list
        while(temp) {
            // remove the cloned node 
            // when current is the head of cloned list
            if(!copy_head) {
                copy_head = temp->next;
                copy_tail = copy_head;
            }
            else {
                copy_tail->next = temp->next;
                copy_tail = copy_tail->next;
            }
            // disconnect the cloned node
            temp->next = (temp->next)->next;
            temp = temp->next;
        }
        
        return copy_head;
    }
};