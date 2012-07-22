// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__CDA9CA9F_67F4_45F1_9959_F81723B4E60A__INCLUDED_)
#define AFX_STDAFX_H__CDA9CA9F_67F4_45F1_9959_F81723B4E60A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//#define	_WIN32_WINNT	0x501
#define _WIN32_IE 0x0500	// For cool Baloon Tooltips
#define	WINVER	0x0501	    // Include aditional extended headers   

#define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions
#include <mmsystem.h>		// Multimedia extensions for audio&video stuff
//#include <Winuser.h>		// For extended Menu functions
#include <afxmt.h>			// Mutex and other Syncronization support
#include <afxdtctl.h>		// MFC support for Internet Explorer 4 Common Controls
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC support for Windows Common Controls
//#include <commctrl.h>
#endif // _AFX_NO_AFXCMN_SUPPORT


//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__CDA9CA9F_67F4_45F1_9959_F81723B4E60A__INCLUDED_)
