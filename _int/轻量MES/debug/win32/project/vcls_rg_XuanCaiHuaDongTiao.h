﻿
// Generated by Volcano Development Platform - http://www.voldp.com

#ifndef __VCLS_RG_XC_GUI_RG_XUANCAIHUADONGTIAO_H__
#define __VCLS_RG_XC_GUI_RG_XUANCAIHUADONGTIAO_H__

namespace rg_xc_gui
{

class rg_XuanCaiHuaDongTiao : public XEleBase
{
    DECLARE_EMPTY_VOL_CLASS (rg_xc_gui, rg_XuanCaiHuaDongTiao)

public:
           int OnSliderBarChange(HELE hEle,int pos,BOOL *pbHandled);

public:
    virtual void rg_ZiDongZhuCeShiJian ();
    virtual void rg_ZhuCeShiJian1 (INT rg_ShiJianLeiXing37);
    INT rg_HuaDongTiao_WeiZhiGaiBian (INT rg_HuaDongTiaoGouBing, INT rg_WeiZhi23, rg_volcano_base::rg_LuoJiXingLei& rg_ShiFouLanJie131);
    virtual void rg_YiChuShiJian1 (INT rg_ShiJianLeiXing38);
    inline_ rg_XuanCaiHuaDongTiao () { }
    inline_ void _VolObjectInitMembers () { }

public:
    void ra_XuanCaiHuaDongTiao_HuaDongTiao_WeiZhiGaiBian (VOID_FUNC fnReceiver, CVolEventObjectPointer* pEventReceiver, INT nTagNumber);

protected:
    CVolEventReceiver rw_133;
};

}

#endif  //__VCLS_RG_XC_GUI_RG_XUANCAIHUADONGTIAO_H__
