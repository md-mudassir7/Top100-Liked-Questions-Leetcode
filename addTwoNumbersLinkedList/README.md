1.Initialise 2 linked lists one is result and one is temp(which builds our res list)

2.Initialise carry=0

3.run a while loop while carry or list1 or list2

4.In each iteration update carry with sum of carry,val of list1,val of list2

5.temp->next = new node(carry%10)

6.if carry>10 then carry = 1 (carry/=10 will do this)

7.return res->next