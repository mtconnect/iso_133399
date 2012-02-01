#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatedType11
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatedType11



namespace cutting_tool_schema_arm
{

class CRelatedType11 : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CRelatedType11(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CRelatedType11(CRelatedType11 const& init);
	void operator=(CRelatedType11 const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CRelatedType11); }
	MemberElement<CProperty, _altova_mi_altova_CRelatedType11_altova_Property> Property;
	struct Property { typedef Iterator<CProperty> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatedType11
