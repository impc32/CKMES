﻿
// Generated by Volcano Development Platform - http://www.voldp.com

#ifndef __VCLS_RG_XC_GUI_RG_XUANCAITABTIAO_H__
#define __VCLS_RG_XC_GUI_RG_XUANCAITABTIAO_H__

namespace rg_xc_gui
{

class rg_XuanCaiTabTiao : public XEleBase
{
    DECLARE_EMPTY_VOL_CLASS (rg_xc_gui, rg_XuanCaiTabTiao)

public:
           int OnTabBarSelect(HELE hEle,int iItem,BOOL *pbHandled);
           int OnTabBarDelete(HELE hEle,int iItem, BOOL *pbHandled);

public:
    virtual void rg_ZiDongZhuCeShiJian ();
    virtual void rg_ZhuCeShiJian1 (INT rg_ShiJianLeiXing39);
    INT rg_TabTiao_XiangXuanZe (INT64 rg_TabTiaoGouBing, INT rg_WeiZhiSuoYin1, rg_volcano_base::rg_LuoJiXingLei& rg_ShiFouLanJie132);
    INT rg_TabTiao_XiangShanChu (INT64 rg_TabTiaoGouBing1, INT rg_WeiZhiSuoYin2, rg_volcano_base::rg_LuoJiXingLei& rg_ShiFouLanJie133);
    virtual void rg_YiChuShiJian1 (INT rg_ShiJianLeiXing40);
    inline_ rg_XuanCaiTabTiao () { }
    inline_ void _VolObjectInitMembers () { }

public:
    void ra_XuanCaiTabTiao_TabTiao_XiangXuanZe (VOID_FUNC fnReceiver, CVolEventObjectPointer* pEventReceiver, INT nTagNumber);
    void ra_XuanCaiTabTiao_TabTiao_XiangShanChu (VOID_FUNC fnReceiver, CVolEventObjectPointer* pEventReceiver, INT nTagNumber);

protected:
    CVolEventReceiver rw_134;
    CVolEventReceiver rw_135;
};

}

#endif  //__VCLS_RG_XC_GUI_RG_XUANCAITABTIAO_H__
