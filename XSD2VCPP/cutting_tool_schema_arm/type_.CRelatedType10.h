#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatedType10
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatedType10



namespace cutting_tool_schema_arm
{

class CRelatedType10 : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CRelatedType10(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CRelatedType10(CRelatedType10 const& init);
	void operator=(CRelatedType10 const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CRelatedType10); }
	MemberElement<CPhysical_item_definition, _altova_mi_altova_CRelatedType10_altova_Physical_item_definition> Physical_item_definition;
	struct Physical_item_definition { typedef Iterator<CPhysical_item_definition> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatedType10
