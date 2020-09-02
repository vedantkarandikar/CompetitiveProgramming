class Node:
    def __init__(self, freq, data):
        self.freq = freq
        self.data = data
        self.left = None
        self.right = None


def tree(node, string, answer, current):
    cs = string[current]
    if node:
        if not node.left and not node.right:
            answer += node.data
        else:
            if cs == 0:
                tree(node.left, string, answer)
            if cs == 1:
                tree(node.right, string, answer)


a = Node(5, NULL)
