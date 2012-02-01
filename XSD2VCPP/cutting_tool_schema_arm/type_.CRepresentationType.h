#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRepresentationType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRepresentationType



namespace cutting_tool_schema_arm
{

class CRepresentationType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CRepresentationType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CRepresentationType(CRepresentationType const& init);
	void operator=(CRepresentationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CRepresentationType); }
	MemberElement<CExternal_model, _altova_mi_altova_CRepresentationType_altova_External_model> External_model;
	struct External_model { typedef Iterator<CExternal_model> iterator; };
	MemberElement<CExternal_picture, _altova_mi_altova_CRepresentationType_altova_External_picture> External_picture;
	struct External_picture { typedef Iterator<CExternal_picture> iterator; };
	MemberElement<CExternal_geometric_model, _altova_mi_altova_CRepresentationType_altova_External_geometric_model> External_geometric_model;
	struct External_geometric_model { typedef Iterator<CExternal_geometric_model> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRepresentationType
