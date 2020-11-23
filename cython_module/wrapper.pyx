cimport c_container
from cython.operator cimport dereference as deref

cdef class PyContainer:
    def __cinit__(self, int number):
        self.thisptr = new c_container.Container(number)
        # self.thisptr = make_unique[c_container.Container](<int>number)

    def __dealloc__(self):
        del self.thisptr

    cpdef add1(self):
        self.thisptr.add1()

    cpdef int getNum(self):
        return deref(self.thisptr).getNum()

def container_test():
    cdef cont = PyContainer(10)
    cont.add1()
    print(cont.getNum())

# container_test()
