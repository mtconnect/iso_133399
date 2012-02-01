#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CContextsType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CContextsType



namespace cutting_tool_schema_arm
{

class CContextsType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CContextsType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CContextsType(CContextsType const& init);
	void operator=(CContextsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CContextsType); }
	MemberElement<CApplication_context, _altova_mi_altova_CContextsType_altova_Application_context> Application_context;
	struct Application_context { typedef Iterator<CApplication_context> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CContextsType
