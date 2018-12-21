class Node:

    def __init__(self, start, end, hole, processID):
        self.next = None
        self.start = start
        self.end = end
        self.hole = hole
        self.processID = processID

class LinkedList:

    def __init__(self):
        self.head = None
        self.numnodes = 0

    def insertFirst(self, start, end, hole, processID):
        node = Node(start, end, hole, processID)
        node.next = self.head
        self.head = node
        self.numnodes += 1

    def insertLast(self, start, end, hole, processID):
        node = Node(start, end, hole, processID)
        if self.numnodes == 0:
            self.head = node
            self.numnodes += 1
            return
        else:
            currentNode = self.head
            while currentNode.next != None:
                currentNode = currentNode.next
            currentNode.next = node
            self.numnodes += 1

    def remFirst(self):
        self.head = self.head.next
        self.numnodes -= 1

    def remLast(self):
        currentNode = self.head
        while currentNode.next != None:
            p_node = currentNode
            currentNode = currentNode.get_next()
        del currentNode
        p_node.next = None
        self.numnodes -= 1

    def getFirst(self):
        return self.head

    def getLast(self):
        currentNode = self.head
        while currentNode.next != None:
            currentNode = currentNode.next
        return currentNode
