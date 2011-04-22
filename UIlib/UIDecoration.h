#if !defined(AFX_UIDECORATION_H__20060218_5471_B259_0B2E_0080AD509054__INCLUDED_)
#define AFX_UIDECORATION_H__20060218_5471_B259_0B2E_0080AD509054__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class UILIB_API TitleShadowUI : public ControlUI
{
public:
   const TCHAR* GetClass() const;
   SIZE EstimateSize(SIZE szAvailable);
   void DoPaint(HDC hDC, const RECT& rcPaint);
};


class UILIB_API CListHeaderShadowUI : public ControlUI
{
public:
   const TCHAR* GetClass() const;
   SIZE EstimateSize(SIZE szAvailable);
   void DoPaint(HDC hDC, const RECT& rcPaint);
};


class UILIB_API SeparatorLineUI : public ControlUI
{
public:
   const TCHAR* GetClass() const;
   SIZE EstimateSize(SIZE szAvailable);
   void DoPaint(HDC hDC, const RECT& rcPaint);
};


class UILIB_API FadedLineUI : public ControlUI
{
public:
   const TCHAR* GetClass() const;
   SIZE EstimateSize(SIZE szAvailable);
   void DoPaint(HDC hDC, const RECT& rcPaint);
};

#endif // !defined(AFX_UIDECORATION_H__20060218_5471_B259_0B2E_0080AD509054__INCLUDED_)

