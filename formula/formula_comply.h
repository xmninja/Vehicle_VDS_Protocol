/**********************************************************************
Copyright:		YiXiong AUTO S&T Co., Ltd.
Description:
	1.������ȡ������״̬������
	2.���������汾��Ϣ��ʾ��ʽ������
	3.����������ͨ���������㺯����
	4.������������֡���������㺯����
	5.����������ȫ�����㷨������

History:
	<author>	<time>		<desc>
************************************************************************/
#ifndef _FORMULA_COMPLY_H
#define _FORMULA_COMPLY_H
#include "../interface/protocol_define.h"

void process_normal_ds_calculate( int iDsId, const byte* pcDsSource, int ByteLen, byte* pcDsValueOut );
void process_inform_format( const byte* pcSource, byte cIvalidLen, byte cStyle, byte* pcOut );
void process_normal_infor_calculate( int iDsId, const byte* pcDsSource, const int iByteLen, byte* pcDsValueOut );
int get_Dtc_status( byte cDctStatusData, byte *pcTemp, byte cDtcMask );
int get_J1939Dtc_status( byte cDctStatusData, byte *pcTemp, byte cDtcMask );

void process_freeze_ds_calculate( int iDsId, const byte* pcDsSource, byte* pcDsValueOut );
bool process_security_access_algorithm( byte cAccessLevel, void* pOut );
extern  int	g_iDefaultSessionCmdIndex[];
extern  int	g_iExtendSessionCmdIndex[];
extern	int	g_iRequestSeedCmdIndex[];
extern	int	g_iSendKeyCmdIndex[];


#endif
