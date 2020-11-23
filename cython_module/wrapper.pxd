cimport c_container

cdef class PyContainer:
    cdef c_container.Container *thisptr
    cpdef add1(self)
    cpdef int getNum(self)