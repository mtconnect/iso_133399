#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssociated_classificationType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssociated_classificationType



namespace cutting_tool_schema_arm
{

class CAssociated_classificationType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CAssociated_classificationType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CAssociated_classificationType(CAssociated_classificationType const& init);
	void operator=(CAssociated_classificationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CAssociated_classificationType); }
	MemberElement<CGeneral_classification, _altova_mi_altova_CAssociated_classificationType_altova_General_classification> General_classification;
	struct General_classification { typedef Iterator<CGeneral_classification> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssociated_classificationType
