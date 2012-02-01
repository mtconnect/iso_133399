#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatedType6
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatedType6



namespace cutting_tool_schema_arm
{

class CRelatedType6 : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CRelatedType6(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CRelatedType6(CRelatedType6 const& init);
	void operator=(CRelatedType6 const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CRelatedType6); }
	MemberElement<CGrade, _altova_mi_altova_CRelatedType6_altova_Grade> Grade;
	struct Grade { typedef Iterator<CGrade> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatedType6
