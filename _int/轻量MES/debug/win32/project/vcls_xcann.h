﻿
// Generated by Volcano Development Platform - http://www.voldp.com

#ifndef __VCLS_RG_XC_GUI_XCANN_H__
#define __VCLS_RG_XC_GUI_XCANN_H__

namespace rg_xc_gui
{

class xcann : public XEleBase
{
    DECLARE_EMPTY_VOL_CLASS (rg_xc_gui, xcann)

public:
            int OnBtnClick (HELE hEle,BOOL *pbHandled);
            int OnButtonCheck(HELE hEle,BOOL bCheck,BOOL *pbHandled);
    public:
        inline_ xcann(vint hEle):xcann()    {
            data().SetP(hEle);
        }

public:
    virtual void rg_ZiDongZhuCeShiJian ();
    virtual void rg_ZhuCeShiJian1 (INT rg_ShiJianLeiXing15);
    INT rg_button_DianJi (INT rg_AnNiuGouBing, rg_volcano_base::rg_LuoJiXingLei& rg_ShiFouLanJie80);
    INT rg_button_XuanZhong (INT rg_AnNiuGouBing1, BOOL rg_ShiFouXuanZhong, rg_volcano_base::rg_LuoJiXingLei& rg_ShiFouLanJie81);
    virtual void rg_YiChuShiJian1 (INT rg_ShiJianLeiXing16);
    virtual INT rg_ChuangJian7 (INT rg_ZuoBian33, INT rg_DingBian33, INT rg_KuanDu31, INT rg_GaoDu31, CVolString& rg_BiaoTi7, INT rg_FuGouBing5);
    inline_ xcann () { }
    inline_ void _VolObjectInitMembers () { }

public:
    void ra_xcann_button_DianJi (VOID_FUNC fnReceiver, CVolEventObjectPointer* pEventReceiver, INT nTagNumber);
    void ra_xcann_button_XuanZhong (VOID_FUNC fnReceiver, CVolEventObjectPointer* pEventReceiver, INT nTagNumber);

protected:
    CVolEventReceiver rw_82;
    CVolEventReceiver rw_83;
};

}

#endif  //__VCLS_RG_XC_GUI_XCANN_H__
