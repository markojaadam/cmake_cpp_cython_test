cdef extern from "cpp_module.hpp":
    cdef cppclass Container:
        Container(int)
        int number
        void add1()
        int getNum()