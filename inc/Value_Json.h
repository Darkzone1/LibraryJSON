
#ifndef _VALUE_JSON_H_
#define _VALUE_JSON_H_

template <typename T,class T1> 
class value_Json{
	public:
		value_Json();
		value_Json(T type_Value);
		value_Json(T1 object_Value);
		~value_Json();
		void add_Value(T type_Value);
		T print_Value();
		int delete_Value();
	private:
		T value;
};

#endif
