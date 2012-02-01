#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CReferenced_standardType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CReferenced_standardType



namespace cutting_tool_schema_arm
{

class CReferenced_standardType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CReferenced_standardType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CReferenced_standardType(CReferenced_standardType const& init);
	void operator=(CReferenced_standardType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CReferenced_standardType); }
	MemberElement<CClassification_system, _altova_mi_altova_CReferenced_standardType_altova_Classification_system> Classification_system;
	struct Classification_system { typedef Iterator<CClassification_system> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CReferenced_standardType
