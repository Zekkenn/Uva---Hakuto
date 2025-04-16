from sys import stdin
from heapq import heapify, heappop, heappush


def calculate_k_minimal_sums( valx, valy ):
    base = valy[0]
    heap = [ (base + x, i, 0) for i, x in enumerate(valx) ]
    heapify(heap)
    
    ans = [  ]
    for i in range( len(valy) ):
        k_value = heappop(heap)
        ans.append( k_value )
        
        if k_value[2] + 1 < len(valx):
            heappush(heap, ( valx[ k_value[1] ] + valy[ k_value[2] + 1 ], k_value[1],  k_value[2] + 1 ))
    
    return [ x[0] for x in ans ]


def main():
    line = stdin.readline().strip()
    
    while line != "":
        k = int(line)
        
        base = sorted([ int(x) for x in stdin.readline().strip().split(" ") ])
        for i in range(1, k):
            values = sorted([ int(x) for x in stdin.readline().strip().split(" ") ])
            base = calculate_k_minimal_sums(base, values)

        print(" ".join([ str(x) for x in base ]))
        line = stdin.readline().strip()


main()
