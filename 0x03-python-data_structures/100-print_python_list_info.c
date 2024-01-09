#include <Python.h>
#include <object.h>
#include <listobject.h>

void print_python_list_info(PyObject *p)
{
	long int size = Pylist_Size(p);

	printf("[*] Size of the Python List = %lu\n", size);
	printf("[*] Allocated = %lu\n", obj->allocated);
	for (i = 0; i < size; i++)
		printf("Element %d: %s\n", i, Py_TYPE(ob_item[i])->tp_name);
}

