class Heap:
    
    def buildMaxHeap(self, arr, n):
        for i in range(n//2, -1, -1):
            self.heapify(arr,n,i)

    def heapify(self,arr,n,i):
        largest = i
        left =2*i+1
        right =2*i+2

        if left<n and arr[i] < arr[left]:
            largest = left
        if right<n and arr[largest] < arr[right]:
            largest = right
        if largest!=i:
            arr[i],arr[largest]=arr[largest],arr[i]
            self.heapify(arr,n,largest)

    def heapsort(self,arr):
        n=len(arr)
        self.buildMaxHeap(arr, n)
        for i in range(n-1,0,-1):
            arr[i],arr[0]=arr[0],arr[i]
            self.heapify(arr, i, 0)

class priorityqueue(Heap):

    def getmax(self,arr):
        return arr[0]

    def extract_max(self,arr):
        n=len(arr)
        temp = arr[0]
        arr[0]=arr[n-1]
        self.heapify(arr,n,0)
        return temp

    def insert_ele(self,arr,ele):
        n=len(arr)+1
        arr.append(ele)
        self.buildMaxHeap(arr, n)





arr = [4,1,3,2,16,9,10,14,8,7]
h = Heap()
h.buildMaxHeap(arr, len(arr))
# h.heapsort(arr)
# print(arr)
q = priorityqueue()
# print(q.getmax(arr))
# print(q.extract_max(arr))
q.insert_ele(arr, 15)
print(arr)