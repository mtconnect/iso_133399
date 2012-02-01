#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CSuper_classificationType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CSuper_classificationType



namespace cutting_tool_schema_arm
{

class CSuper_classificationType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CSuper_classificationType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CSuper_classificationType(CSuper_classificationType const& init);
	void operator=(CSuper_classificationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CSuper_classificationType); }
	MemberElement<CGeneral_classification, _altova_mi_altova_CSuper_classificationType_altova_General_classification> General_classification;
	struct General_classification { typedef Iterator<CGeneral_classification> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CSuper_classificationType
