/*
 * ZipBase64.h
 *
 *  Created on: 2017年9月7日
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

//解压报文
MYDLL_API char* WINAPIV unZipBase64(const char* jsonData);//MAKEINTRESOURCE(2)
//压缩报文
MYDLL_API char* WINAPIV enZipBase64(const char* data);//MAKEINTRESOURCE(1)


#endif /* ZIPBASE64_H_ */
