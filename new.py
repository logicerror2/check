# class Task:  
#     task_list = {}
#     def __init__(self, name, status='pending'):
#         self.name = name
#         self.status = status        
#     def add(self, name):
#         self.task_list[name] = 'pending'    
#     def done(self, name):
#         self.task_list[name] = 'completed'   
#     def display(self):
#         for i in self.task_list:
#             print(i)
# a = Task("eat")
# a.add("eat")
# a.display()
# a.done("eat")

class Array:
    def __init__(self):
        self.items = []
        
    def insert(self, data):
        self.items.append(data)
        
    def remove(self, data):
        if data in self.items:
            self.items.remove(data)
        else:
            print("Item not found")
            
    def display(self):
        for item in self.items:
            print(item)
            
    def sum(self):
        c = 0
        for i in self.items:
            c += i
        return c
    
    def m(self):
        temp = 0
        for i in self.items:
            if i>temp:
                temp = i
        return temp
            
a1 = Array()
a1.insert(10)
a1.insert(20) 
a1.display()
a1.insert(30)
a1.insert(40)
a1.remove(20)
a1.display()
print("Sum:", a1.sum())