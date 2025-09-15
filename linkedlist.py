class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        
class LinkedList:
    def __init__(self):
        self.head = None
        
    def add(self,data):
        new = Node(data)
        if not self.head:
            self.head = new
            return
        last = self.head
        while last.next:
            last = last.next
        last.next = new
        
    def delete(self, val):
        if not self.head:
            return
        if self.head.data == val:
            self.head = self.head.next
        temp = self.head
        while temp.next:
            if temp.next.data == val:
                temp.next = temp.next.next
                return
            temp = temp.next
            
    def print_list(self):
        temp = self.head
        while temp:
            print(temp.data)
            temp = temp.next
            
    def insert_at_beginning(self, data):
        new = Node(data)
        if not self.head:
            self.head = new
            return
        new.next = self.head
        self.head = new
        return
        
            
li = LinkedList()
li.add(1)
li.add(2)
li.add(3)
li.print_list()
print()
li.delete(2)
li.print_list()
li.insert_at_beginning(4)
print()
li.print_list()