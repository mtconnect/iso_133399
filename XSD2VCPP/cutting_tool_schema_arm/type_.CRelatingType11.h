#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatingType11
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatingType11



namespace cutting_tool_schema_arm
{

class CRelatingType11 : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CRelatingType11(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CRelatingType11(CRelatingType11 const& init);
	void operator=(CRelatingType11 const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CRelatingType11); }
	MemberElement<CProperty, _altova_mi_altova_CRelatingType11_altova_Property> Property;
	struct Property { typedef Iterator<CProperty> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatingType11
