#ifndef StingClass_H
#define StingClass_H
#define max_lng 4096

class String {
private:
//Attributes
	int lng;
	char* cadena;
public:
//Constructors
	String();
	String(const char* c);
	String(const String &a);
	
//Comparation
	bool operator== (const char* c) const;
	bool operator== (const String &a) const;
	bool operator!= (const char* c);
	bool operator!= (const String &a);

//Operator
	const String& operator = (const char* c);
	const String& operator = (const String &a);

	//String& operator  +(const String &a) const;
	//String& operator  +(const char* c) const;


	//String& operator  += (const String &a);
	//String& operator  += (const char* c);

//Function
	void clear();
	int length() const;
	char* getString() const;
	int String::capacity() const;

};

#endif