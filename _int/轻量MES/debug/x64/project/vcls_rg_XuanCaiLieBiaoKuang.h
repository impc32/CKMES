﻿
// Generated by Volcano Development Platform - http://www.voldp.com

#ifndef __VCLS_RG_XC_GUI_RG_XUANCAILIEBIAOKUANG_H__
#define __VCLS_RG_XC_GUI_RG_XUANCAILIEBIAOKUANG_H__

namespace rg_xc_gui
{

class rg_XuanCaiLieBiaoKuang : public rg_XuanCaiGunDongShiTu
{
    DECLARE_EMPTY_VOL_CLASS (rg_xc_gui, rg_XuanCaiLieBiaoKuang)

public:
           int OnListBoxTemplateCreate(HELE hEle,listBox_item_* pItem, int nFlag, BOOL *pbHandled);
           int OnListBoxTemplateCreateEnd(HELE hEle,listBox_item_* pItem, int nFlag, BOOL *pbHandled);
           int OnListBoxTemplateDestroy(HELE hEle,listBox_item_* pItem, int nFlag, BOOL *pbHandled);
           int OnListBoxDrawItem(HELE hEle,HDRAW hDraw,listBox_item_* pItem,BOOL *pbHandled);
           int OnListBoxSelect(HELE hEle,int iItem,BOOL *pbHandled);

public:
    virtual void rg_ZiDongZhuCeShiJian ();
    virtual void rg_ZhuCeShiJian1 (INT rg_ShiJianLeiXing17);
    INT rg_list_box_XiangMoBanChuangJian (INT64 rg_LieBiaoKuangGouBing, rg_list_box_XiangJieGou& rg_XiangMuJieGou, INT rg_XiangMuBiaoShi, rg_volcano_base::rg_LuoJiXingLei& rg_ShiFouLanJie82);
    INT rg_list_box_XiangMoBanChuangJianWanCheng (INT64 rg_LieBiaoKuangGouBing1, rg_list_box_XiangJieGou& rg_XiangMuJieGou1, INT rg_XiangMuBiaoShi1, rg_volcano_base::rg_LuoJiXingLei& rg_ShiFouLanJie83);
    INT rg_list_box_XiangMoBanXiaoHui (INT64 rg_LieBiaoKuangGouBing2, rg_list_box_XiangJieGou& rg_XiangMuJieGou2, INT rg_XiangMuBiaoShi2, rg_volcano_base::rg_LuoJiXingLei& rg_ShiFouLanJie84);
    INT rg_list_box_XiangHuiZhi (INT64 rg_LieBiaoKuangGouBing3, rg_XuanCaiHuiTu& rg_KaiShiHuiTu9, rg_list_box_XiangJieGou& rg_XiangMuJieGou3, rg_volcano_base::rg_LuoJiXingLei& rg_ShiFouLanJie85);
    INT rg_list_box_XiangXuanZe (INT64 rg_LieBiaoKuangGouBing4, INT rg_XiangMuID, rg_volcano_base::rg_LuoJiXingLei& rg_ShiFouLanJie86);
    virtual void rg_YiChuShiJian1 (INT rg_ShiJianLeiXing18);
    virtual INT64 rg_ChuangJian9 (INT rg_ZuoBian36, INT rg_DingBian36, INT rg_KuanDu34, INT rg_GaoDu34, INT64 rg_FuGouBing9);
    inline_ rg_XuanCaiLieBiaoKuang () { }
    inline_ void _VolObjectInitMembers () { }

public:
    void ra_XuanCaiLieBiaoKuang_list_box_XiangMoBanChuangJian (VOID_FUNC fnReceiver, CVolEventObjectPointer* pEventReceiver, INT nTagNumber);
    void ra_XuanCaiLieBiaoKuang_list_box_XiangMoBanChuangJianWanCheng (VOID_FUNC fnReceiver, CVolEventObjectPointer* pEventReceiver, INT nTagNumber);
    void ra_XuanCaiLieBiaoKuang_list_box_XiangMoBanXiaoHui (VOID_FUNC fnReceiver, CVolEventObjectPointer* pEventReceiver, INT nTagNumber);
    void ra_XuanCaiLieBiaoKuang_list_box_XiangHuiZhi (VOID_FUNC fnReceiver, CVolEventObjectPointer* pEventReceiver, INT nTagNumber);
    void ra_XuanCaiLieBiaoKuang_list_box_XiangXuanZe (VOID_FUNC fnReceiver, CVolEventObjectPointer* pEventReceiver, INT nTagNumber);

protected:
    CVolEventReceiver rw_84;
    CVolEventReceiver rw_85;
    CVolEventReceiver rw_86;
    CVolEventReceiver rw_87;
    CVolEventReceiver rw_88;
};

}

#endif  //__VCLS_RG_XC_GUI_RG_XUANCAILIEBIAOKUANG_H__
