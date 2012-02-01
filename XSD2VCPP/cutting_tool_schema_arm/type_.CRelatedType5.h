#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatedType5
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatedType5



namespace cutting_tool_schema_arm
{

class CRelatedType5 : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CRelatedType5(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CRelatedType5(CRelatedType5 const& init);
	void operator=(CRelatedType5 const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CRelatedType5); }
	MemberElement<CExternal_model, _altova_mi_altova_CRelatedType5_altova_External_model> External_model;
	struct External_model { typedef Iterator<CExternal_model> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatedType5
