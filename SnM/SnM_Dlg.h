/******************************************************************************
/ SnM_Dlg.h
/
/ Copyright (c) 2012 Jeffos
/ http://www.standingwaterstudios.com/reaper
/
/ Permission is hereby granted, free of charge, to any person obtaining a copy
/ of this software and associated documentation files (the "Software"), to deal
/ in the Software without restriction, including without limitation the rights to
/ use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
/ of the Software, and to permit persons to whom the Software is furnished to
/ do so, subject to the following conditions:
/ 
/ The above copyright notice and this permission notice shall be included in all
/ copies or substantial portions of the Software.
/ 
/ THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
/ EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
/ OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
/ NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
/ HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
/ WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
/ FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
/ OTHER DEALINGS IN THE SOFTWARE.
/
******************************************************************************/

//#pragma once

#ifndef _SNM_DLG_H_
#define _SNM_DLG_H_

extern bool g_SNMClearType;

ColorTheme* SNM_GetColorTheme(bool _checkForSize = false);
IconTheme* SNM_GetIconTheme(bool _checkForSize = false);
LICE_CachedFont* SNM_GetThemeFont();
LICE_CachedFont* SNM_GetToolbarFont();
HBRUSH SNM_GetThemeBrush(int _col=-666);
void SNM_GetThemeListColors(int* _bg, int* _txt);
void SNM_GetThemeEditColors(int* _bg, int* _txt);
void SNM_ThemeListView(SWS_ListView* _lv);
LICE_IBitmap* SNM_GetThemeLogo();
void SNM_UIInit();
void SNM_UIExit();
void SNM_ShowMsg(const char* _msg, const char* _title = "", HWND _hParent = NULL, bool _clear = true); 
int PromptForInteger(const char* _title, const char* _what, int _min, int _max);
void OpenCueBussDlg(COMMAND_T*);
bool IsCueBussDlgDisplayed(COMMAND_T*);
#ifdef _SNM_MISC // wip
void OpenLangpackMrgDlg(COMMAND_T*);
bool IsLangpackMrgDlgDisplayed(COMMAND_T*);
#endif

#endif