    /*22070123132 Experiment */
    /*data str - linked lists*/
    #include<iostream>
    using namespace std;
    struct node
    {
        int data;
        struct node *next;
    };
    class linked_list
    {
        public:
        linked_list()
        {
            head=nullptr;
        }
        struct node *head;
        public:
        add_start()
        {
            struct node *newnode;
            int x;
        newnode=(struct node *)malloc(sizeof(struct node));
        cout<<"Enter data for new node: ";
        cin>>x;
        newnode->data = x;
        newnode->next = NULL;
        newnode->next = head;
        head = newnode;

        }
        del_start()
        {
            struct node *temp = head;
            if(head==NULL)
            return 0;
            head=head->next;
            free(temp);
        }
       add_end()
        {
        struct node *newnode;
        struct node *temp;
        int x;
        if(head==NULL)
        {
            add_start();
            return 0;
        }
        newnode=(struct node *)malloc(sizeof(struct node));
        cout<<"Enter data for new node at end: ";
        cin>>x;
        newnode->data = x;
        newnode->next = NULL;
        temp=head;
        while(temp->next!=NULL)
        {
        temp=temp->next;
        }
        temp->next = newnode;
        }
        del_end()
        {
            if (head == NULL)
            {
                cout << "List is empty." << endl;
                return 0;
            }

            node* temp = head;
            while (temp->next->next != NULL)
                temp = temp->next;

            delete temp->next;
            temp->next = NULL;
        }
        disp_ll()
        {
            struct node *temp;
            temp = head;
            while(temp!=NULL)
            {
            cout<<(temp->data)<<"->";
            temp=temp->next;
            }
        }
    };
    main()
    {
        linked_list myList;
        while(1)
        {
        char choice;
        cout<<"\nAdd node_bg: 1"<<endl;
        cout<<"Del node_bg: 2"<<endl;
        cout<<"Add node_end: 3"<<endl;
        cout<<"Del node_end: 4"<<endl;
        cout<<"Display node: 5"<<endl;
        cout<<"Exit: 6"<<endl;
        cin>>choice;
        switch(choice)
        {
            case '1':
            myList.add_start();
            break;

            case '2':
            myList.del_start();
            break;

            case '3':
            myList.add_end();
            break;

            case '4':
            myList.del_end();
            break;

            case '5':
            myList.disp_ll();
            break;

            case '6':
            exit;

            default:
            exit;
            break;
        }
        }
        return 0;
    }
