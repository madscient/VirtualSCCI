// VirtualSCCI.cpp : DLL アプリケーション用にエクスポートされる関数を定義します。
//

#include "stdafx.h"
#include "VirtualSCCI.h"


// これは、エクスポートされた変数の例です。
VIRTUALSCCI_API int nVirtualSCCI=0;

// これは、エクスポートされた関数の例です。
VIRTUALSCCI_API int fnVirtualSCCI(void)
{
    return 42;
}

// これは、エクスポートされたクラスのコンストラクターです。
// クラス定義に関しては VirtualSCCI.h を参照してください。
CVirtualSCCI::CVirtualSCCI()
{
    return;
}

