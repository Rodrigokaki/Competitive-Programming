class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

def insertAtBegin(self, data):
    new_node = Node(data)
    if self.head is None:
        self.head = new_node
        return
    else:
        new_node.next = self.head
        self.head = new_node

def printLList(self):
    current = self.head
    while current != None:
        print(current.data, end=" ")
        current = current.next
    print("")

def insertAtEnd(self, data):
    current = self.head
    while current.next != None:
        current = current.next
    current.next = Node(data)



def lengthLList(self):
    count = 0
    current = self.head
    while current != None:
        count += 1
        current = current.next
    return count

def goToIndexLList(self, index):
    current = self.head
    for _ in range(index):
        current = current.next
    return current

def bubbleSort(lista):
    n = lengthLList(lista)

    for i in range(n):
        finished = True
        for j in range(n-i-1):
            current = goToIndexLList(lista, j)
            if current.data > current.next.data:
                current.data, current.next.data = current.next.data, current.data
                finished = False
        if finished:
            return lista

llist = LinkedList()

insertAtBegin(llist, 5)
insertAtEnd(llist, 2)
insertAtEnd(llist, 1)
insertAtEnd(llist, 4)
insertAtEnd(llist, 3)

printLList(llist)

bubbleSort(llist)

printLList(llist)
