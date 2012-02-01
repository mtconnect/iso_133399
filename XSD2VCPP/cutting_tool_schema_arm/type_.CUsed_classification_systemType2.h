#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CUsed_classification_systemType2
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CUsed_classification_systemType2



namespace cutting_tool_schema_arm
{

class CUsed_classification_systemType2 : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CUsed_classification_systemType2(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CUsed_classification_systemType2(CUsed_classification_systemType2 const& init);
	void operator=(CUsed_classification_systemType2 const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CUsed_classification_systemType2); }
	MemberElement<CClassification_system, _altova_mi_altova_CUsed_classification_systemType2_altova_Classification_system> Classification_system;
	struct Classification_system { typedef Iterator<CClassification_system> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CUsed_classification_systemType2
