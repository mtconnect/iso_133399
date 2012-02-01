#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatedType2
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatedType2



namespace cutting_tool_schema_arm
{

class CRelatedType2 : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CRelatedType2(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CRelatedType2(CRelatedType2 const& init);
	void operator=(CRelatedType2 const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CRelatedType2); }
	MemberElement<CClassification_association, _altova_mi_altova_CRelatedType2_altova_Classification_association> Classification_association;
	struct Classification_association { typedef Iterator<CClassification_association> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatedType2
