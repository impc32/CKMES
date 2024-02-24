﻿
// Generated by Volcano Development Platform - http://www.voldp.com

#ifndef __VCLS_RG_XC_GUI_RG_XCBASE_H__
#define __VCLS_RG_XC_GUI_RG_XCBASE_H__

namespace rg_xc_gui
{

class rg_xcbase : public CVolObject
{
    DECLARE_VOL_CLASS (rg_xc_gui, rg_xcbase)

protected:
    inline_ void _OnInitExtra ()  {  m_pRefObject = new CRefObjectWithData<XCGUIDATA>; }
    inline_ void _OnCleanupExtra ()  { if (m_pRefObject != NULL)  m_pRefObject->Release (); }
    inline_ void _CopySelfFromExtra (const rg_xcbase& objCopyFrom)  { SetRefObject (objCopyFrom.m_pRefObject); }
    inline_ BOOL _IsSelfEqualExtra (const rg_xcbase& objCompare) const  { return (m_pRefObject == objCompare.m_pRefObject); }
    CRefObject* m_pRefObject;
public:
    void SetRefObject (CRefObject* pRefObject);
    void TakeOverNewRefObject (CRefObject* pNewRefObject);
    inline_ CRefObject* GetRefObject ()  {  return m_pRefObject;  }
public:
    inline_ XCGUIDATA& data ()  { return ((CRefObjectWithData<XCGUIDATA>*)m_pRefObject)->m_data; }
    inline_ XCGUIDATA* pdata ()  { return &((CRefObjectWithData<XCGUIDATA>*)m_pRefObject)->m_data; }
public:
    inline_ vint get()   {  return data().GetP(); }
    inline_ vint set(vint p)   { return data().SetP(p);  }

public:
    rg_xcbase ();
    void _VolObjectInitMembers ();
    virtual ~rg_xcbase ();
};

}

#endif  //__VCLS_RG_XC_GUI_RG_XCBASE_H__
