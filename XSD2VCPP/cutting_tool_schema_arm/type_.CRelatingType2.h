#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatingType2
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatingType2



namespace cutting_tool_schema_arm
{

class CRelatingType2 : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CRelatingType2(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CRelatingType2(CRelatingType2 const& init);
	void operator=(CRelatingType2 const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CRelatingType2); }
	MemberElement<CClassification_association, _altova_mi_altova_CRelatingType2_altova_Classification_association> Classification_association;
	struct Classification_association { typedef Iterator<CClassification_association> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatingType2
