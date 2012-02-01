#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CUsed_classification_systemType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CUsed_classification_systemType



namespace cutting_tool_schema_arm
{

class CUsed_classification_systemType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CUsed_classification_systemType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CUsed_classification_systemType(CUsed_classification_systemType const& init);
	void operator=(CUsed_classification_systemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CUsed_classification_systemType); }
	MemberElement<CClassification_system, _altova_mi_altova_CUsed_classification_systemType_altova_Classification_system> Classification_system;
	struct Classification_system { typedef Iterator<CClassification_system> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CUsed_classification_systemType
