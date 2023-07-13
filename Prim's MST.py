from os import *
from sys import *
from collections import *
from math import *
import heapq

def calculatePrimsMST(n, m, g):
    adj = [[] for _ in range(n+1)]  # Adjusted for 1-based indexing
    for i, j, w in g:
        adj[i].append((j, w))
        adj[j].append((i, w))
    
    ans = []
    visited = [False] * (n+1)
    pq = []  # Min heap

    heapq.heappush(pq, (0, -1, 1))  # weight, source, destination

    while pq:
        weight, source, destination = heapq.heappop(pq)

        if visited[destination]:
            continue

        visited[destination] = True
        if source != -1:
            ans.append([source, destination, weight])

        for adjNode, eW in adj[destination]:
            if not visited[adjNode]:
                heapq.heappush(pq, (eW, destination, adjNode))
    
    return ans
