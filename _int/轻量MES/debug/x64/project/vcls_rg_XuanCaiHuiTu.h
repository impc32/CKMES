﻿
// Generated by Volcano Development Platform - http://www.voldp.com

#ifndef __VCLS_RG_XC_GUI_RG_XUANCAIHUITU_H__
#define __VCLS_RG_XC_GUI_RG_XUANCAIHUITU_H__

namespace rg_xc_gui
{

class rg_XuanCaiHuiTu : public rg_guibase
{
    DECLARE_VOL_CLASS (rg_xc_gui, rg_XuanCaiHuiTu)

protected:
    inline_ void _OnInitExtra ()  {  m_pRefObject = new CRefObjectWithData<CXHDRAW>; }
    inline_ void _OnCleanupExtra ()  { if (m_pRefObject != NULL)  m_pRefObject->Release (); }
    inline_ void _CopySelfFromExtra (const rg_XuanCaiHuiTu& objCopyFrom)  { SetRefObject (objCopyFrom.m_pRefObject); }
    inline_ BOOL _IsSelfEqualExtra (const rg_XuanCaiHuiTu& objCompare) const  { return (m_pRefObject == objCompare.m_pRefObject); }
    CRefObject* m_pRefObject;
public:
    void SetRefObject (CRefObject* pRefObject);
    void TakeOverNewRefObject (CRefObject* pNewRefObject);
    inline_ CRefObject* GetRefObject ()  {  return m_pRefObject;  }
public:
    inline_ CXHDRAW& data ()  { return ((CRefObjectWithData<CXHDRAW>*)m_pRefObject)->m_data; }
    inline_ CXHDRAW* pdata ()  { return &((CRefObjectWithData<CXHDRAW>*)m_pRefObject)->m_data; }
virtual HDRAW GetP()  { return GetHDRAW(); }
inline_ HDRAW GetHDRAW() { return data().GetPtr(); }
virtual BOOL SetP(HDRAW ptr)  { return SetHDRAW(ptr); }
inline_  BOOL SetHDRAW(HDRAW ptr) { return data().SetPtr(ptr); }
public:
    inline_ rg_XuanCaiHuiTu(HDRAW hDraw):rg_XuanCaiHuiTu()    {
        data().SetPtr(hDraw);
    }

public:
    rg_XuanCaiHuiTu ();
    void _VolObjectInitMembers ();
    virtual ~rg_XuanCaiHuiTu ();
};

}

#endif  //__VCLS_RG_XC_GUI_RG_XUANCAIHUITU_H__
