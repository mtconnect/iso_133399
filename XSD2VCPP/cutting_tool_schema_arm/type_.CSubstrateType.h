#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CSubstrateType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CSubstrateType



namespace cutting_tool_schema_arm
{

class CSubstrateType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CSubstrateType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CSubstrateType(CSubstrateType const& init);
	void operator=(CSubstrateType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CSubstrateType); }
	MemberElement<CSubstrate, _altova_mi_altova_CSubstrateType_altova_Substrate> Substrate;
	struct Substrate { typedef Iterator<CSubstrate> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CSubstrateType
