#ifndef ESUTIL_HPP_
#define ESUTIL_HPP_

#include <android_native_app_glue.h>
#include <GLES3/gl3.h>
#include <EGL/egl.h>

#include <fstream>
#include <string>

#include "esEvent.hpp"
#include "esShader.c"
#include "esShapes.c"
#include "esTransform.c"
#include "esUtil_Android.c"
#include "esUtil_win.h"
#include "esUtil.c"
#include "esUtil.h"

enum ESMAIN_RETURN
{
	FINISH_APP = 0,
	CONTINUE_APP = 1
};

template<typename T>
T* esGetUserData(ESContext * esContext)
{
	return (T*)esContext->userData;
}

/*class FileLog : public std::ofstream
{
	public:
	FileLog() : std::ofstream() {}
	FileLog(std::string path) : std::ofstream(path) {}
	FileLog& printf(std::string fmt,...)
	{
		va_list vl;
		va_start(vl,fmt);
		char text[SHRT_MAX];
		sprintf(text,fmt.data(),vl);
		*this << text;
		va_end(vl);
	}
};*/

typedef std::ofstream FileLog;

template<int n = 1,typename T = float>
struct Vector
{
	typedef T DataType;
	static int num;
	T * data = NULL;
	Vector()
	{
		if(n > 0&&n <= 4)
		{
			num = n;
			data = new T[n];
		}
		else
		data = NULL;
	}
	Vector(int _,...) : Vector()
	{
		if(n > 0&&n <= 4)
		{
			va_list vl;
			va_start(vl,_);
			for(int i = 0;i < n;i++)
			data[i] = va_arg(vl,T);
			va_end(vl);
		}
	}
	~Vector()
	{
		if(n > 0&&n <= 4)
		delete [] data;
	}
	Vector<n,T>& operator=(Vector<n,T> vec)
	{
		if(n > 0&&n <= 4)
		{
			for(int i = 0;i < n;i++)
			data[i] = vec.data[i];
		}
		return *this;
	}
	
	T& x() { return data[0]; }
	T& y() { return data[1]; }
	T& z() { return data[2]; }
	T& w() { return data[3]; }
	
	T& r() { return data[0]; }
	T& g() { return data[1]; }
	T& b() { return data[2]; }
	T& a() { return data[3]; }
};
namespace VectorType
{
	typedef Vector<1> vec;
	typedef Vector<2> vec2;
	typedef Vector<2> vec3;
	typedef Vector<2> vec4;
};

#endif