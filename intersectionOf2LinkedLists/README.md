Approach

    1.Initailise 2 temporary node pointing to list1 and list2(temp1=head1 and temp2=head2)

    2.Since its sure that intersection point exists, run a while loop until temp1!=temp2

    3.In the loop keep moving temp1 and temp2

    4.If any of them reaches NULL, initialise it to other lists head i.e (if temp1==NULL then temp1=head2 and if temp2==NULL the temp2=head1)

    5.Return any of temp1 and temp2 after while loop


Dry Run

    head1 = 1->2->3->4->5->6

    head2 = 7->8->4->5->6

    when temp2 becomes NULL temp1 is at Node(5) of head1 so reassign temp2 = head1

    and when temp1 becomes NULL temp2 is at Node(2) of head1 so reassign temp1=head2

    and now temp1 = Node(2) of head1 and temp2 = Node(7) of head2 moving them together takes us to Node(4) which is the intersection point