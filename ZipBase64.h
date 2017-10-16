/*
 * ZipBase64.h
 *
 *  Created on: 2017��9��7��
 *      Author: Administrator
 */
 
#ifndef ZIPBASE64_H_
#define ZIPBASE64_H_


#if defined(WIN32) || defined(WIN64) /* windows */
#include <windows.h>
#else
#define WINAPIV
#endif

#ifdef MYDLL_API
#define MYDLL_API extern __declspec(dllimport)
#else
#define MYDLL_API extern __declspec(dllexport)
#endif

//��ѹ����
MYDLL_API char* WINAPIV unZipBase64(const char* jsonData);//MAKEINTRESOURCE(2)
//ѹ������
MYDLL_API char* WINAPIV enZipBase64(const char* data);//MAKEINTRESOURCE(1)


#endif /* ZIPBASE64_H_ */
