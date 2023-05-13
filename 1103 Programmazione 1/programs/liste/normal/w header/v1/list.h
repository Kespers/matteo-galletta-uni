#ifndef LIST_H

    #define LIST_H

    void insertNode(struct dato* d, struct nodo **head);
    void deleteNode(struct dato* d, struct nodo **head);
    int isEmpty(struct nodo* head);
    void printList(struct nodo* head);

#endif