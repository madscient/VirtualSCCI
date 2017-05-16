// 以下の ifdef ブロックは DLL からのエクスポートを容易にするマクロを作成するための 
// 一般的な方法です。この DLL 内のすべてのファイルは、コマンド ラインで定義された VIRTUALSCCI_EXPORTS
// シンボルを使用してコンパイルされます。このシンボルは、この DLL を使用するプロジェクトでは定義できません。
// ソースファイルがこのファイルを含んでいる他のプロジェクトは、 
// VIRTUALSCCI_API 関数を DLL からインポートされたと見なすのに対し、この DLL は、このマクロで定義された
// シンボルをエクスポートされたと見なします。
#ifdef VIRTUALSCCI_EXPORTS
#define VIRTUALSCCI_API __declspec(dllexport)
#else
#define VIRTUALSCCI_API __declspec(dllimport)
#endif

// このクラスは VirtualSCCI.dll からエクスポートされました。
class VIRTUALSCCI_API CVirtualSCCI {
public:
	CVirtualSCCI(void);
	// TODO: メソッドをここに追加してください。
};

extern VIRTUALSCCI_API int nVirtualSCCI;

VIRTUALSCCI_API int fnVirtualSCCI(void);
